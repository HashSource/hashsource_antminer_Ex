int __fastcall sub_3B3E0(_DWORD *a1, int a2)
{
  int v3; // r0
  int result; // r0
  int v5; // r0
  int v6; // r0
  _DWORD *v7; // r0
  _DWORD *v8; // r0

  if ( a2 )
  {
    a1[2058] = -2;
    v3 = sub_1FE1D4(a1);
    if ( v3 )
    {
      v8 = (_DWORD *)sub_242FF0(v3);
      sub_2594D8(*v8, "[fd%d->asynchronous]\n", a1[1]);
    }
    sub_3AE34(a1);
    result = a1[2];
    if ( result != -1 )
      return sub_152D80(result, &loc_3AE1C, a1);
    return result;
  }
  v5 = sub_1FE1D4(a1);
  if ( v5 )
  {
    v7 = (_DWORD *)sub_242FF0(v5);
    sub_2594D8(*v7, "[fd%d->synchronous]\n", a1[1]);
    v6 = a1[2058];
    if ( v6 == -2 )
      goto LABEL_10;
  }
  else
  {
    v6 = a1[2058];
    if ( v6 == -2 )
      goto LABEL_10;
  }
  if ( v6 == -1 )
    sub_152E54(a1[1]);
  else
    sub_1534CC(v6);
LABEL_10:
  result = a1[2];
  if ( result != -1 )
    return sub_152E54(result);
  return result;
}
