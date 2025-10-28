int __fastcall sub_1D4E5C(_DWORD *a1, int a2)
{
  int v4; // r7
  const char *v5; // r6
  const char *v6; // r0
  int result; // r0

  if ( dword_487D4C )
  {
    v4 = *(_DWORD *)sub_242FF0(a1);
    v5 = (const char *)sub_240150(a1);
    v6 = (const char *)sub_230984(a1[2], a1[3], a1[4]);
    sub_2594D8(
      v4,
      "[record-btrace] resuming thread %s (%s): %x (%s)\n",
      v5,
      v6,
      a2,
      *((const char **)&unk_3CFDCC + a2 + 69));
  }
  result = sub_E39EC((int)a1);
  a1[74] = a1[74] & 0xFFFFFFE0 | a2;
  return result;
}
