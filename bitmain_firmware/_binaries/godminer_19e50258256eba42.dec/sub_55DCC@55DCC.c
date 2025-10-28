int __fastcall sub_55DCC(const json_t *a1, const json_t *a2)
{
  json_t *v6; // [sp+8h] [bp-14h]
  json_t *v7; // [sp+Ch] [bp-10h]
  size_t v8; // [sp+10h] [bp-Ch]
  size_t i; // [sp+14h] [bp-8h]

  v8 = json_array_size(a1);
  if ( v8 != json_array_size(a2) )
    return 0;
  for ( i = 0; i < v8; ++i )
  {
    v7 = json_array_get(a1, i);
    v6 = json_array_get(a2, i);
    if ( !json_equal(v7, v6) )
      return 0;
  }
  return 1;
}
