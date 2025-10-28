char *__fastcall sub_98F18(const char *a1)
{
  int n; // [sp+Ch] [bp-10h]
  char *v4; // [sp+10h] [bp-Ch]
  char *dest; // [sp+14h] [bp-8h]

  dest = (char *)calloc(1u, 8u);
  v4 = strchr(a1, 95);
  n = v4 - a1;
  if ( v4 && n <= 7 )
    strncpy(dest, a1, n);
  return dest;
}
