int __fastcall sub_BDFD0(int result, int *a2, int *a3)
{
  int v4; // r6
  int v6; // r0
  int v7; // r7
  int v8; // r8
  int v9; // r0
  int v10; // r8
  int v11; // r9
  _DWORD *v12; // r7
  int v13; // r9

  if ( **(_BYTE **)(*a2 + 24) == 8 && **(_BYTE **)(*a3 + 24) == 8 )
  {
    v4 = result;
    v6 = sub_1780DC(*(_DWORD *)(result + 12));
    v7 = *a3;
    v8 = v6;
    v9 = sub_BCF30(*a2, *a3);
    v10 = sub_BCF30(*(_DWORD *)(v8 + 12), v9);
    sub_BCF70(v4, *(_DWORD *)(v7 + 20), (int *)(v7 + 24), v10);
    v11 = *a2;
    v12 = sub_98394(0x38u);
    sub_C0928(v12, 0);
    sub_BCF70((int)v12, *(_DWORD *)(v11 + 20), (int *)(v11 + 24), v10);
    v13 = v12[1];
    sub_C0988(v12);
    sub_33AC2C(v12);
    if ( v13 > 0 )
    {
      sub_C09E0(v4, 43);
      sub_BCF70(v4, *(_DWORD *)(*a2 + 20), (int *)(*a2 + 24), v10);
      sub_C09E0(v4, 43);
    }
    result = sub_171280(v10);
    *a3 = result;
    *a2 = result;
  }
  return result;
}
