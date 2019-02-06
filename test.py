from pwn import *
p = process('./a.out')
p.sendline('7')
print [p.recv()]
p.close()
p = process('./a.out')
p.sendline('9')
print [p.recv()]