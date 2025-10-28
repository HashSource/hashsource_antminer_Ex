void __fastcall sub_15821C(__sighandler_t *a1)
{
  off_46D45C = (char (*)[28])*a1;
  if ( dword_46DC04 != 2 )
    goto LABEL_2;
  if ( a1[1] )
    signal(2, a1[2]);
  if ( sub_1580E8() )
  {
    sub_1580AC();
    free(a1);
  }
  else
  {
LABEL_2:
    free(a1);
  }
}
