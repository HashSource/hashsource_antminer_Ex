void sub_23E974()
{
  _DWORD *v0; // r3
  _DWORD *v1; // r4

  v0 = (_DWORD *)dword_48A4D4;
  if ( dword_48A4D4 )
  {
    do
    {
      while ( 1 )
      {
        v1 = (_DWORD *)v0[1];
        if ( v0[11] == 2 )
          break;
        v0 = (_DWORD *)v0[1];
        if ( !v1 )
          return;
      }
      sub_23E204(v0[2], v0[3], v0[4], 0);
      v0 = v1;
    }
    while ( v1 );
  }
}
