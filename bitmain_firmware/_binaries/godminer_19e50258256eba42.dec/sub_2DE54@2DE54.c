void *__fastcall sub_2DE54(json_t *a1, char a2, int a3, const char *a4)
{
  void *result; // r0
  const char *v5; // r3
  json_t *v6; // r0
  json_t *v7; // r0
  json_t *v8; // r0
  json_t *v9; // r0
  json_t *v10; // r0
  json_t *v11; // r0
  char s[48]; // [sp+14h] [bp-40h] BYREF
  char v17[4]; // [sp+44h] [bp-10h] BYREF
  json_t *v18; // [sp+48h] [bp-Ch]
  json_t *v19; // [sp+4Ch] [bp-8h]

  v19 = 0;
  v18 = 0;
  *(_WORD *)v17 = 0;
  result = memset(s, 0, sizeof(s));
  if ( a1 && a4 )
  {
    v19 = (json_t *)json_array();
    v18 = (json_t *)json_object();
    if ( a2 )
      v5 = "S";
    else
      v5 = "E";
    snprintf(v17, 2u, "%s", v5);
    v6 = (json_t *)json_string(v17);
    json_object_set_new(v18, "STATUS", v6);
    v7 = (json_t *)json_integer(dword_5AC204, dword_5AC204 >> 31);
    json_object_set_new(v18, "When", v7);
    v8 = (json_t *)json_integer(a3, a3 >> 31);
    json_object_set_new(v18, "Code", v8);
    if ( a3 == 7 )
      snprintf(s, 0x30u, a4, total_pools);
    else
      snprintf(s, 0x30u, "%s", a4);
    v9 = (json_t *)json_string(s);
    json_object_set_new(v18, "Msg", v9);
    v10 = (json_t *)json_string(opt_api_description);
    json_object_set_new(v18, "Description", v10);
    json_array_append_new(v19, v18);
    result = (void *)json_object_set_new(a1, "STATUS", v19);
    if ( a2 != 1 )
    {
      v11 = (json_t *)json_integer(1, 0);
      return (void *)json_object_set_new(a1, "id", v11);
    }
  }
  return result;
}
