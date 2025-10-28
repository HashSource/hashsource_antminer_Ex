void sub_219EFC()
{
  int v0; // r6
  _DWORD *v1; // r4
  int v2; // r0

  v0 = dword_46DBB0;
  if ( (unsigned int)dword_46DBB0 > 0x100000 )
  {
    dword_46DBB0 = dword_46DBAC;
    sub_94708("Symbol cache size is too large, max is %u.", 0x100000);
  }
  dword_46DBAC = dword_46DBB0;
  v1 = (_DWORD *)dword_487D28;
  if ( dword_487D28 )
  {
    do
    {
      v2 = sub_1CD174((int)v1, (_DWORD *)dword_489700);
      if ( v2 )
        sub_219E64(v2, v0);
      v1 = (_DWORD *)*v1;
    }
    while ( v1 );
  }
}
