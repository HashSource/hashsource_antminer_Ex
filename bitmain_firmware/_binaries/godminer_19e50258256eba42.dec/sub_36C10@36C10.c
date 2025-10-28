int __fastcall sub_36C10(const json_t *a1, char *a2)
{
  void *v3; // r0
  void *v4; // r0
  void *v5; // r0
  void *v6; // r0
  const json_t *v10; // [sp+14h] [bp-18h]
  json_t *v11; // [sp+18h] [bp-14h]
  json_t *v12; // [sp+1Ch] [bp-10h]
  char *src; // [sp+24h] [bp-8h]

  if ( !a1 || !a2 )
    return -2147483641;
  v12 = json_object_get(a1, "STATUS");
  if ( !v12 || *(_DWORD *)v12 != 1 )
    return -2147483646;
  v11 = json_array_get(v12, 0);
  if ( !v11 || *(_DWORD *)v11 )
    return -2147483646;
  v3 = json_object_iter(v11);
  for ( src = (char *)json_object_iter_key(v3); src; src = (char *)json_object_iter_key(v5) )
  {
    v6 = json_object_key_to_iter(src);
    v10 = (const json_t *)json_object_iter_value(v6);
    if ( !v10 )
      break;
    strcat(a2, src);
    *(_WORD *)&a2[strlen(a2)] = 61;
    sub_36768(a2, v10);
    *(_WORD *)&a2[strlen(a2)] = 44;
    v4 = json_object_key_to_iter(src);
    v5 = json_object_iter_next(v11, v4);
  }
  a2[strlen(a2) - 1] = 124;
  sub_3690C(a2, a1);
  return 0;
}
