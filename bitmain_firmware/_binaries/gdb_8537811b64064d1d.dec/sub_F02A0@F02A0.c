int __fastcall sub_F02A0(int a1, int a2)
{
  _BYTE v4[4]; // [sp+Ch] [bp-4h] BYREF

  sub_2A8A2C(a1, a2, a2, a2 >> 31, 0);
  sub_2A8800(v4, 2, a1);
  return v4[0] + (v4[1] << 8);
}
