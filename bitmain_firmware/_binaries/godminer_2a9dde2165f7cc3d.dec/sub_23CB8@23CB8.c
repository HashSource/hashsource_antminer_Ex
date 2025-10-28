int __fastcall sub_23CB8(int result, const char **a2, int a3)
{
  bool v3; // zf
  int v5; // r5
  int v6; // r6
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // [sp+0h] [bp-20h] BYREF
  int v12; // [sp+4h] [bp-1Ch]
  int v13; // [sp+8h] [bp-18h]
  int v14; // [sp+Ch] [bp-14h]
  _DWORD v15[4]; // [sp+10h] [bp-10h] BYREF

  v3 = a2 == 0;
  if ( a2 )
    v3 = result == 0;
  v12 = 0;
  v11 = 0;
  v13 = 0;
  v14 = 0;
  memset(v15, 0, sizeof(v15));
  if ( !v3 )
  {
    v5 = result;
    v6 = json_object(result, a2, a3, 0, v11, v12, v13, v14);
    v7 = json_string("S");
    json_object_set_new(v6, "STATUS", v7);
    v8 = json_integer(dword_173198, dword_173198 >> 31);
    json_object_set_new(v6, "when", v8);
    snprintf((char *)&v11, 0x10u, "%s", *a2);
    v9 = json_string(&v11);
    json_object_set_new(v6, "Msg", v9);
    snprintf((char *)v15, 0x10u, "%s", a2[1]);
    v10 = json_string(v15);
    json_object_set_new(v6, "api_version", v10);
    return json_object_set_new(v5, "STATUS", v6);
  }
  return result;
}
