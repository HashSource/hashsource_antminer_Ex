int __fastcall sub_A9C9C(int a1, int a2, int a3, int a4, int a5)
{
  int v8; // r0
  char *v9; // r1
  int v10; // r4
  int v11; // r2
  int v13; // r6
  bool v14; // zf
  int v15; // r3
  const char *v16; // r5
  size_t v17; // r0
  void *v18; // r6
  int v19; // r2
  int v20; // r5
  int v21; // r0
  int v22; // r3
  char v23; // r2
  int v24; // r0
  int v25; // r6
  int v26; // r5
  int v27; // r0
  int v28; // r0
  char v29[12]; // [sp+0h] [bp-24h] BYREF

  v8 = sub_A0898(a1);
  v9 = *(char **)(v8 + 24);
  v10 = v8;
  v11 = *v9;
  switch ( v11 )
  {
    case 3:
      if ( (v9[2] & 8) != 0 )
        v13 = v8;
      else
        v13 = sub_A2920(v8);
      v10 = sub_AA634(v10, a2, a3, 0);
      v14 = a5 == 0;
      if ( a5 )
        v14 = a3 == 0;
      if ( v14 || !sub_A299C(v13, "_tag", 0, 1) )
      {
        if ( v10 )
        {
          v15 = *(_DWORD *)(v10 + 24);
          v16 = *(const char **)(v15 + 8);
          if ( v16 || (v16 = *(const char **)(v15 + 12)) != 0 )
          {
            v17 = strlen(v16);
            sub_93198(v29, v17 + 7, "%s___XVZ", v16);
            v18 = sub_92E50();
            v20 = sub_A6954(v29, v29, v19);
            sub_92E68((int)v18);
            if ( v20 && *(_DWORD *)(v10 + 20) != *(_QWORD *)v29 )
            {
              v21 = ((int (__fastcall *)(int))loc_176850)(v10);
              v22 = *(_DWORD *)(v21 + 24);
              v10 = v21;
              v23 = *(_BYTE *)(v22 + 1);
              *(_DWORD *)(v21 + 20) = *(_DWORD *)v29;
              *(_BYTE *)(v22 + 1) = v23 & 0xFB;
            }
          }
        }
      }
      else
      {
        v24 = sub_A1D34(v10, a2, a3);
        v25 = sub_A98B4(v24);
        v26 = sub_26DD58(v10, a2, a3);
        v10 = sub_26BC98(v26);
        if ( v25 )
        {
          v27 = sub_A98E8(v26);
          v28 = ((int (__fastcall *)(int))loc_26C0C4)(v27);
          return sub_AA634(v25, 0, v28, 0);
        }
      }
      return v10;
    case 4:
      if ( !a4 )
        return v10;
      return sub_A9B34(v8, a2, a3, a4);
    case 2:
      return sub_AA99C();
    default:
      return v10;
  }
}
