int __fastcall sub_A8FFC(int a1, int a2)
{
  int v3; // r9
  int v4; // r0
  int v5; // r6
  int v6; // r0
  int v7; // r7
  int v8; // r0
  int v9; // r4
  __int64 v10; // r0
  int v11; // r5
  int v12; // r3
  __int64 v13; // r0
  int v15; // r0
  int v16; // [sp+8h] [bp-Ch] BYREF
  int v17; // [sp+Ch] [bp-8h] BYREF

  v3 = a1;
  v4 = sub_26BC98(a1);
  if ( **(_BYTE **)(sub_171280(v4) + 24) == 1 )
    v3 = sub_262134(v3);
  v5 = sub_26BD58(v3);
  if ( sub_A0D24(v5) )
  {
    v15 = sub_A893C();
    return sub_A8FFC(v15, a2);
  }
  else
  {
    if ( v5 && sub_A0A2C(v5) )
    {
      v7 = sub_A8720(v5, a2, 0);
      v9 = sub_A8720(v5, a2, 1);
    }
    else
    {
      v16 = sub_A11FC(v3);
      v6 = sub_2624F0(&v16, 0, *(_DWORD *)&asc_374020[8 * a2 + 644], 0, "Bad GNAT array descriptor bounds");
      v7 = sub_26EB44(v6);
      v17 = sub_A11FC(v3);
      v8 = sub_2624F0(&v17, 0, *(_DWORD *)&asc_374020[8 * a2 + 648], 0, "Bad GNAT array descriptor bounds");
      v9 = sub_26EB44(v8);
    }
    v10 = sub_171280(v5);
    v11 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v10 + 24) + 24) + 12);
    if ( v11 )
    {
      v12 = *(_DWORD *)(v11 + 24);
      if ( *(_BYTE *)v12 == 12 )
        v11 = *(_DWORD *)(v12 + 20);
      sub_26DB1C(v11, HIDWORD(v10), v7, v7 >> 31);
      v13 = sub_9B538();
      v7 = v13;
      sub_26DB1C(v11, HIDWORD(v13), v9, v9 >> 31);
      v9 = sub_9B538();
    }
    return v9 - v7 + 1;
  }
}
