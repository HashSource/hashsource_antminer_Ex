int __fastcall sub_238FC(int result, const char **a2)
{
  bool v2; // zf
  int v4; // r5
  int v5; // r6
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  _DWORD v10[4]; // [sp+0h] [bp-20h] BYREF
  _DWORD v11[4]; // [sp+10h] [bp-10h] BYREF

  v2 = a2 == 0;
  if ( a2 )
    v2 = result == 0;
  memset(v10, 0, sizeof(v10));
  memset(v11, 0, sizeof(v11));
  if ( !v2 )
  {
    v4 = result;
    v5 = json_object(result);
    v6 = json_string("S");
    json_object_set_new(v5, "STATUS", v6);
    v7 = json_integer(dword_164FC8, dword_164FC8 >> 31);
    json_object_set_new(v5, "when", v7);
    snprintf((char *)v10, 0x10u, "%s", *a2);
    v8 = json_string(v10);
    json_object_set_new(v5, "Msg", v8);
    snprintf((char *)v11, 0x10u, "%s", a2[1]);
    v9 = json_string(v11);
    json_object_set_new(v5, "api_version", v9);
    return json_object_set_new(v4, "STATUS", v5);
  }
  return result;
}
