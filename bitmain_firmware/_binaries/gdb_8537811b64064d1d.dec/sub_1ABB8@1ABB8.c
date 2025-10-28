int __fastcall sub_1ABB8(_DWORD *a1)
{
  int v1; // r4
  const char *v2; // r0

  v1 = a1[3];
  v2 = (const char *)sub_25ACB4(*a1, a1[2]);
  sub_259880("Process record does not support instruction 0x%0x at address %s.\n", v1, v2);
  return -1;
}
