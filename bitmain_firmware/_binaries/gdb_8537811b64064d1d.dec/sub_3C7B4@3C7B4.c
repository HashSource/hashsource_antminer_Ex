int __fastcall sub_3C7B4(int a1)
{
  const char *v1; // r4
  const char *v2; // r0

  v1 = "child";
  if ( *(_BYTE *)(sub_1836B0(a1) + 120) )
    v1 = "attached";
  v2 = (const char *)sub_230984(dword_4878EC, dword_4878F0, dword_4878F4);
  return sub_259F38("\tUsing the running image of %s %s.\n", v1, v2);
}
