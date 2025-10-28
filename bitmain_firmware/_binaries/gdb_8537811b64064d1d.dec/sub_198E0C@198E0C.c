void __fastcall sub_198E0C(int *a1)
{
  void *v2; // r0
  int v3; // r5
  void *v4; // r6
  bool v5; // zf
  _DWORD v6[3]; // [sp+10h] [bp-90h] BYREF
  int v7; // [sp+1Ch] [bp-84h] BYREF
  int v8; // [sp+20h] [bp-80h]

  if ( a1 && *a1 )
  {
    sub_195528(&v7, 0, (int)off_46D5A4[0], 0, 0, 0, 0);
    v2 = sub_92564((int)sub_19546C, (int)&v7);
    v3 = *a1;
    v4 = v2;
    v7 = v3;
    v8 = v3;
    do
    {
      sub_197F5C((int)v6, &v7);
      if ( v6[0] == 4 )
        break;
      ((void (__fastcall *)(_DWORD *, int *))loc_197E24)(v6, &v7);
      v5 = v6[0] == 0;
      if ( v6[0] )
        v5 = v6[0] == 5;
    }
    while ( !v5 );
    *a1 += v8 - v3;
    sub_92648(v4);
  }
}
