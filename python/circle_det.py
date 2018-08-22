# -*- coding: utf-8 -*-
"""
Created on Sun Jul 29 21:34:19 2018

@author: shobhit

"""
import cv2
import numpy as np

cap=cv2.VideoCapture(0)

while(True):
    frame,img=cap.read();
    gray=cv2.cvtColor(img,cv2.COLOR_BGR2GRAY)
    
    g_gray=cv2.GaussianBlur(gray,(15,15),0)
    
                        
  
    cv2.imshow("img",img)
    
    if cv2.waitKey(1) & 0xFF==ord('f'):
        break
    
cap.release()
cv2.destroyAllWindows()


                            
    
