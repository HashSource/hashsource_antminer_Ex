int __fastcall sub_1C6E38(int a1)
{
  int *i; // r0

  if ( a1 )
  {
    i = (int *)sub_1C607C(a1, (int (__fastcall *)(_DWORD *, int, _DWORD *))sub_1C59E8, 0);
  }
  else
  {
    i = (int *)sub_25A40C("Delete all auto-display expressions? ");
    if ( i )
    {
      for ( i = (int *)dword_487CEC; dword_487CEC; i = (int *)dword_487CEC )
      {
        dword_487CEC = *i;
        sub_1C59B0(i);
      }
    }
  }
  return sub_243C5C(i);
}
