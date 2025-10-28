size_t __fastcall sub_2FCD0(size_t result, int a2, const char *a3)
{
  size_t v5; // [sp+Ch] [bp-10h]
  int i; // [sp+10h] [bp-Ch]
  size_t v7; // [sp+14h] [bp-8h]

  v5 = result;
  v7 = 0;
  for ( i = 0; i < a2; ++i )
  {
    sprintf((char *)&a3[v7], "%d-", *(_DWORD *)(v5 + 4 * i));
    result = strlen(a3);
    v7 = result;
  }
  a3[v7 - 1] = 45;
  a3[v7 - 1] = 0;
  return result;
}
