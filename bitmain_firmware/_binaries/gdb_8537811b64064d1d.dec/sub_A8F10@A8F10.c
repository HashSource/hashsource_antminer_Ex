int __fastcall sub_A8F10(int a1, int a2, int a3)
{
  int v5; // r5
  int v6; // r0
  int v7; // r6
  int v8; // r0
  int v10; // r0
  int v11; // [sp+Ch] [bp-8h] BYREF

  v5 = a1;
  v6 = sub_26BC98(a1);
  if ( **(_BYTE **)(sub_171280(v6) + 24) == 1 )
    v5 = sub_262134(v5);
  v7 = sub_26BD58(v5);
  if ( sub_A0D24(v7) )
  {
    v10 = sub_A893C();
    return sub_A8F10(v10, a2, a3);
  }
  else if ( v7 && sub_A0A2C(v7) )
  {
    return sub_A8720(v7, a2, a3);
  }
  else
  {
    v11 = sub_A11FC(v5);
    v8 = sub_2624F0(&v11, 0, *(_DWORD *)&asc_374020[8 * a2 + 644 + 4 * a3], 0, "Bad GNAT array descriptor bounds");
    return sub_26EB44(v8);
  }
}
