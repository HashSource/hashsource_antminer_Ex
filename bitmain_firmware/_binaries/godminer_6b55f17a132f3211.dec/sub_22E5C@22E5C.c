void *__fastcall sub_22E5C(int a1, int a2, int a3, const char *a4)
{
  void *result; // r0
  bool v9; // zf
  __int64 v10; // r0
  int v11; // r2
  int v12; // r3
  int v13; // r9
  int v14; // r6
  __int16 v15; // r3
  int v16; // r0
  int v17; // r0
  int v18; // r0
  const char *v19; // r2
  _DWORD *v20; // r3
  int v21; // r0
  int v22; // r0
  int v23; // r0
  __int16 v24; // [sp+4h] [bp-38h] BYREF
  char s[48]; // [sp+8h] [bp-34h] BYREF

  v24 = 0;
  result = memset(s, 0, sizeof(s));
  v9 = a4 == 0;
  if ( a4 )
    v9 = a1 == 0;
  if ( !v9 )
  {
    v10 = json_array(result);
    v13 = v10;
    v14 = json_object(v10, HIDWORD(v10), v11, v12);
    if ( a2 )
      v15 = 83;
    else
      v15 = 69;
    v24 = v15;
    v16 = json_string(&v24);
    json_object_set_new(v14, "STATUS", v16);
    v17 = json_integer(dword_164ED0, dword_164ED0 >> 31);
    json_object_set_new(v14, "When", v17);
    v18 = json_integer(a3, a3 >> 31);
    json_object_set_new(v14, "Code", v18);
    if ( a3 == 7 )
      LOWORD(v20) = 20696;
    else
      LOWORD(v19) = -14820;
    if ( a3 == 7 )
    {
      HIWORD(v20) = 22;
      snprintf(s, 0x30u, a4, *v20);
    }
    else
    {
      HIWORD(v19) = 19;
      snprintf(s, 0x30u, v19, a4);
    }
    v21 = json_string(s);
    json_object_set_new(v14, "Msg", v21);
    v22 = json_string(opt_api_description);
    json_object_set_new(v14, "Description", v22);
    json_array_append_new(v13, v14);
    result = (void *)json_object_set_new(a1, "STATUS", v13);
    if ( !a2 )
    {
      v23 = json_integer(1, 0);
      return (void *)json_object_set_new(a1, "id", v23);
    }
  }
  return result;
}
