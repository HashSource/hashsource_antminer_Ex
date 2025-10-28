void sub_56488()
{
  _DWORD *v0; // r4
  int v1; // r6
  int i; // r0
  int v3; // r0

  v0 = (_DWORD *)dword_48769C;
  v1 = dword_487668;
  dword_487668 = dword_48769C;
  if ( dword_48769C )
  {
    for ( i = ((int (*)(void))sub_191AE8)(); ; i = sub_191AE8(v3) )
    {
      v3 = sub_56374(i);
      if ( v3 )
        v3 = sub_188838(*(_DWORD *)(v3 + 16));
      v0 = (_DWORD *)*v0;
      if ( !v0 )
        break;
      dword_487668 = (int)v0;
    }
  }
  dword_487668 = v1;
}
