json_t *__fastcall sub_291C0(json_t *result, _DWORD *a2, int a3)
{
  json_t *v3; // r0
  __int64 v4; // r0
  json_t *v5; // r0
  json_t *v6; // r0
  json_t *v8; // [sp+Ch] [bp-10h]
  int i; // [sp+14h] [bp-8h]

  v8 = result;
  if ( result && a2 )
  {
    for ( i = 0; i < a2[2]; ++i )
    {
      if ( a3 == *(_DWORD *)(a2[4] + 4 * i) )
      {
        v3 = (json_t *)json_string(*(const char **)(a2[3] + 4 * i));
        json_object_set_new(v8, "status", v3);
        v4 = *(int *)(a2[4] + 4 * i);
        v5 = (json_t *)json_integer(v4, HIDWORD(v4));
        json_object_set_new(v8, "code", v5);
        v6 = (json_t *)json_string(*(const char **)(a2[5] + 4 * i));
        return (json_t *)json_object_set_new(v8, "msg", v6);
      }
    }
  }
  return result;
}
