int __fastcall sub_A8130(int a1, int *a2)
{
  int v3; // r0
  int v4; // r4
  int v6; // r0
  int v7; // r7
  int v8; // r6
  int v9; // r0
  int v10; // r0
  int v11; // r2
  int v12; // r0
  int v13; // r3
  int v14; // r0
  int v15; // r2
  int v16; // r3
  int v17; // r3
  __int64 v18; // [sp+0h] [bp-14h] BYREF
  __int64 v19; // [sp+8h] [bp-Ch] BYREF

  v3 = sub_A0898(a1);
  v4 = v3;
  if ( **(_BYTE **)(v3 + 24) == 2 )
  {
    v6 = sub_A0E60(v3, (const char *)&dword_375E58);
    if ( v6 )
      v7 = ((int (__fastcall *)(_DWORD, _DWORD))loc_A7DB8)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v6 + 24) + 24) + 12), 0);
    else
      v7 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v4 + 24) + 24) + 12);
    v8 = sub_16FF80(v4);
    v9 = sub_A0898(*(_DWORD *)(*(_DWORD *)(v4 + 24) + 20));
    v10 = sub_A8130(v9, a2);
    sub_17214C(v8, v10, v7);
    v11 = *(_DWORD *)(v8 + 24);
    v12 = *(_DWORD *)(v4 + 24);
    *(_DWORD *)(*(_DWORD *)(v11 + 24) + 8) = *(_DWORD *)(*(_DWORD *)(v11 + 24) + 8) & 0xF | (16 * *a2);
    v13 = *(_DWORD *)(v12 + 8);
    if ( !v13 )
      v13 = *(_DWORD *)(v12 + 12);
    *(_DWORD *)(v11 + 8) = v13;
    if ( **(_BYTE **)(sub_171280(v7) + 24) == 12 && (v14 = sub_171280(v7), sub_1728A8(v14))
      || sub_171984(v7, &v18, &v19) < 0 )
    {
      v15 = 1;
    }
    else
    {
      if ( v19 < v18 )
      {
        *(_DWORD *)(v8 + 20) = 0;
        *a2 = 0;
LABEL_11:
        v4 = v8;
        *(_BYTE *)(*(_DWORD *)(v8 + 24) + 2) |= 8u;
        return v4;
      }
      v15 = v19 - v18 + 1;
    }
    v16 = *a2 * v15;
    *a2 = v16;
    if ( v16 + 7 >= 0 )
      v17 = v16 + 7;
    else
      v17 = v16 + 14;
    *(_DWORD *)(v8 + 20) = v17 >> 3;
    goto LABEL_11;
  }
  return v4;
}
