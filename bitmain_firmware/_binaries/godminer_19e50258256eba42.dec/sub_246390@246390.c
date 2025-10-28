int __fastcall sub_246390(_DWORD *a1, int a2, int a3)
{
  int result; // r0

  memcpy(a1, "ZcashPoW", 8u);
  a1[2] = convirt_total_rate(a2);
  result = convirt_total_rate(a3);
  a1[3] = result;
  return result;
}
