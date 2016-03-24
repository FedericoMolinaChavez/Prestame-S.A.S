import smtplib
from smtplib import SMTPException


archivo = open ('newMail.txt','r')
stringNew = archivo.read()
content = stringNew.split(",")

a1 = content[0]
b1 = content[1]
c = content[2]
d1= content[3]
e1 = content[4]
algo = [c]
def emailxc(a, b, d, e, c):
	sender = a
	receivers = c

	message = "From:"+d+"Subject: "+e

	try:
   		smtpObj = smtplib.SMTP('smtp.gmail.com', 587)
   		smtpObj.ehlo()
   		smtpObj.starttls()
   		smtpObj.ehlo()
   		smtpObj.login(a,b)
   		smtpObj.sendmail(sender, receivers, message)   
   		smtpObj.quit()      
   		print "Successfully sent email"
	except SMTPException:
   		print "Error: unable to send email"
   	return;




emailxc (a1,b1,d1,e1,algo)