int __fastcall sub_1C7530(int a1, unsigned __int8 *a2)
{
  int v4; // r6
  int v5; // r0
  int v6; // r3
  int v7; // r4
  int *v8; // r0
  _BYTE v10[64]; // [sp+4h] [bp-4Ch] BYREF
  int v11; // [sp+44h] [bp-Ch]

  v4 = sub_26EEE0();
  sub_26BC98(a1);
  sub_B790C(v4);
  sub_259F38("$%d = ", v4);
  sub_B7990();
  v5 = sub_266650(v10, a2[4]);
  v6 = a2[6];
  v7 = a2[5];
  v11 = v6;
  v8 = (int *)sub_242FB4(v5);
  sub_1C5800(a1, v7, (int)v10, *v8);
  sub_259F38((const char *)&word_356660);
  return sub_B79B0();
}
