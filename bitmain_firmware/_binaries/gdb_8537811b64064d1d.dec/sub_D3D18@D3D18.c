_DWORD *__fastcall sub_D3D18(_DWORD *a1)
{
  _DWORD *v1; // r4
  _DWORD *v2; // r7
  _DWORD *v3; // r6
  _DWORD *v4; // r5

  v1 = a1;
  if ( !a1 )
    return 0;
  v2 = 0;
  v3 = 0;
  do
  {
    v4 = sub_98394(0x20u);
    sub_D3C44((int)v4, (int)v1);
    if ( v3 )
      *v3 = v4;
    else
      v2 = v4;
    v1 = (_DWORD *)*v1;
    v3 = v4;
  }
  while ( v1 );
  *v4 = 0;
  return v2;
}
