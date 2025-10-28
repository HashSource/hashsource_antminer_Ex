void *__fastcall sub_235C8(int a1, int a2, int a3, const char *a4)
{
  void *result; // r0
  bool v9; // zf
  int v10; // r9
  int v11; // r6
  __int16 v12; // r3
  int v13; // r0
  int v14; // r0
  int v15; // r0
  const char *v16; // r2
  _DWORD *v17; // r3
  int v18; // r0
  int v19; // r0
  int v20; // r0
  __int16 v21; // [sp+4h] [bp-38h] BYREF
  char s[48]; // [sp+8h] [bp-34h] BYREF

  v21 = 0;
  result = memset(s, 0, sizeof(s));
  v9 = a4 == 0;
  if ( a4 )
    v9 = a1 == 0;
  if ( !v9 )
  {
    v10 = json_array(result);
    v11 = json_object(v10);
    if ( a2 )
      v12 = 83;
    else
      v12 = 69;
    v21 = v12;
    v13 = json_string(&v21);
    json_object_set_new(v11, "STATUS", v13);
    v14 = json_integer(dword_164FC8, dword_164FC8 >> 31);
    json_object_set_new(v11, "When", v14);
    v15 = json_integer(a3, a3 >> 31);
    json_object_set_new(v11, "Code", v15);
    if ( a3 == 7 )
      LOWORD(v17) = 21584;
    else
      LOWORD(v16) = -22924;
    if ( a3 == 7 )
    {
      HIWORD(v17) = 22;
      snprintf(s, 0x30u, a4, *v17);
    }
    else
    {
      HIWORD(v16) = 19;
      snprintf(s, 0x30u, v16, a4);
    }
    v18 = json_string(s);
    json_object_set_new(v11, "Msg", v18);
    v19 = json_string(opt_api_description);
    json_object_set_new(v11, "Description", v19);
    json_array_append_new(v10, v11);
    result = (void *)json_object_set_new(a1, "STATUS", v10);
    if ( !a2 )
    {
      v20 = json_integer(1, 0);
      return (void *)json_object_set_new(a1, "id", v20);
    }
  }
  return result;
}
