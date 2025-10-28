int __fastcall sub_4D0D4(int a1)
{
  int v2; // r4
  int v4; // r6
  void *v5; // r0
  int v6; // r7
  int v7; // r4
  int *v8; // r0
  int v9; // r5
  int *v10; // r4
  int v11; // [sp+10h] [bp-74h] BYREF
  int v12; // [sp+14h] [bp-70h] BYREF
  _BYTE v13[96]; // [sp+18h] [bp-6Ch] BYREF
  __int64 v14; // [sp+78h] [bp-Ch]

  v2 = ((int (__fastcall *)(int))loc_4C6A8)(1);
  if ( !v2 )
    return 0;
  v4 = sub_92564(nullsub_39, 0);
  v5 = sub_4C63C((const char **)v2, a1);
  v6 = sub_967DC(v5, 0, 0);
  if ( v6 < 0 )
    goto LABEL_15;
  sub_96A1C();
  if ( _fxstat64(3, v6, v13) )
    goto LABEL_15;
  if ( v14 == *(_QWORD *)(v2 + 16) )
  {
    sub_92648(v4);
    return 0;
  }
  v7 = sub_4CE00();
  if ( !v7 )
    goto LABEL_15;
  if ( v14 != *(_QWORD *)(v7 + 8) )
  {
    if ( sub_4C8A0(*(_DWORD *)(v7 + 4), 1, v6, 0, 0, 0, 0) >= 0
      && !((int (__fastcall *)(_DWORD, int *, int *))loc_4CEF4)(*(_DWORD *)(v7 + 4), &v11, &v12) )
    {
      if ( !v11 )
      {
        *(_QWORD *)(v7 + 8) = v14;
        goto LABEL_12;
      }
      v9 = v12;
      if ( v12 == 38 )
        v9 = 95;
      v10 = _errno_location();
      *v10 = v9;
LABEL_16:
      sub_92648(v4);
      *v10 = v9;
      return -1;
    }
LABEL_15:
    v8 = _errno_location();
    v9 = *v8;
    v10 = v8;
    goto LABEL_16;
  }
LABEL_12:
  sub_92648(v4);
  return 1;
}
