_DWORD *__fastcall sub_192288(int a1, int *a2, int a3)
{
  _DWORD *v5; // r4
  int v6; // r0
  int v7; // r0
  int v8; // r3

  v5 = sub_930BC(1u, 0x14u);
  if ( a3 )
    v6 = a3;
  else
    v6 = 51168;
  if ( !a3 )
    HIWORD(v6) = 59;
  v7 = sub_32727C(v6);
  v8 = *a2;
  v5[3] = v7;
  *a2 = (int)v5;
  v5[4] = v8;
  return v5;
}
