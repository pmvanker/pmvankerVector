;2.	Copy the byte at internal RAM address 27h to external RAM address 27h.
org 0h
;mov 0xa0,#00h
mov 27h,#1
mov a,27h
mov r1,#27h
movx @r1,a
mov dptr,#27h
movx @dptr,a;

end