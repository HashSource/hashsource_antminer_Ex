void sub_DC44C()
{
  char *v0; // r10
  int v1; // r9
  int v2; // r0
  _DWORD *v3; // r4
  _DWORD *v4; // r5
  void *v5; // r6
  int v6; // r0
  int v7; // r1
  int v8; // r2
  int v9; // [sp+10h] [bp-2Ch]
  _BYTE v10[40]; // [sp+14h] [bp-28h] BYREF

  v0 = off_46D5A4[0][2];
  v9 = dword_487D2C;
  v1 = dword_46DE54;
  v2 = ((int (__fastcall *)(_BYTE *))loc_23FF48)(v10);
  v3 = (_DWORD *)dword_478348;
  if ( dword_478348 )
  {
    do
    {
      v4 = (_DWORD *)v3[2];
      v5 = sub_92E50();
      v6 = v3[23];
      dword_46DE54 = v3[24];
      sub_19422C(v6);
      (*(void (__fastcall **)(_DWORD *))(v3[1] + 4))(v3);
      v2 = sub_92E68((int)v5);
      v3 = v4;
    }
    while ( v4 );
  }
  sub_1937A4(v2);
  ((void (__fastcall *)(_BYTE *))loc_23FCB4)(v10);
  ((void (__fastcall *)(int))loc_1CD2B8)(v9);
  dword_46DE54 = v1;
  sub_19422C(v0);
  sub_D0478();
  sub_D35F0();
  sub_D0600();
  sub_D3950();
  sub_D7314(1, v7, v8);
}
