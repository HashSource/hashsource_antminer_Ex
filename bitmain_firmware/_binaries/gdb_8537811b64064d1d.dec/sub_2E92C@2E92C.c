int __fastcall sub_2E92C(int a1, int (__fastcall *a2)(const char *, int, void *, const char *, int), int a3)
{
  int v5; // r6
  int result; // r0

  v5 = sub_163EA0(a1);
  result = a2(".reg", 72, &unk_34BF2C, 0, a3);
  if ( *(int *)(v5 + 16) > 0 )
    return a2(".reg-arm-vfp", 260, &unk_34BF3C, "VFP floating-point", a3);
  if ( *(_DWORD *)(v5 + 8) )
    return a2(".reg2", 116, &unk_34BF4C, "FPA floating-point", a3);
  return result;
}
