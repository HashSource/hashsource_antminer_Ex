bool __fastcall sub_28227C(int *a1)
{
  int v2; // r0
  int v3; // r3

  dword_48AAA0 |= 0x40u;
  v2 = sub_293374(a1);
  v3 = dword_48AAA0;
  a1[8] = v2;
  dword_48AAA0 = v3 & 0xFFFFFFBF;
  return sub_280D68(a1) != 0;
}
