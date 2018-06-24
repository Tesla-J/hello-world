import subprocess as sub
import os
from sys import platform
import socket

plat = platform

class shell(object):
  def __init__(self,platforma):
    self.plataforma = plataforma
  
  def windows(self):
    pass
    
  def linux(self):
    pass
