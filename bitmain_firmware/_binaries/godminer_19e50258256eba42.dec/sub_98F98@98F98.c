char *__fastcall sub_98F98(const char *a1)
{
  size_t v1; // r4
  char *v4; // [sp+8h] [bp-14h]
  char *dest; // [sp+Ch] [bp-10h]

  dest = (char *)calloc(1u, 8u);
  v4 = strchr(a1, 95);
  if ( v4 )
  {
    v1 = strlen(a1);
    if ( v1 - strlen(v4) <= 7 )
      strcpy(dest, v4 + 1);
  }
  return dest;
}
