void *__fastcall sub_22D4C(int a1)
{
  void *result; // r0
  int v3; // r1
  int v4; // r2
  int v5; // r3
  int v6; // r5
  int v7; // r0
  int v8; // r0
  int v9; // r0
  _DWORD v10[16]; // [sp+0h] [bp-C4h] BYREF
  char s[64]; // [sp+40h] [bp-84h] BYREF
  char v12[68]; // [sp+80h] [bp-44h] BYREF

  memset(v10, 0, sizeof(v10));
  memset(s, 0, sizeof(s));
  result = memset(v12, 0, 0x40u);
  if ( a1 )
  {
    v6 = json_object(result, v3, v4, v5, v10[0], v10[1], v10[2], v10[3]);
    snprintf((char *)v10, 0x40u, "%s", g_miner_version);
    v7 = json_string(v10);
    json_object_set_new(v6, "miner_version", v7);
    snprintf(s, 0x40u, "%s", g_miner_compiletime);
    v8 = json_string(s);
    json_object_set_new(v6, "CompileTime", v8);
    snprintf(v12, 0x40u, "%s", g_miner_type);
    v9 = json_string(v12);
    json_object_set_new(v6, "type", v9);
    return (void *)json_object_set_new(a1, "INFO", v6);
  }
  return result;
}
