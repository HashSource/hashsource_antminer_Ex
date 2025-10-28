void *__fastcall sub_2A45C(json_t *a1)
{
  void *result; // r0
  json_t *v2; // r0
  json_t *v3; // r0
  json_t *v4; // r0
  char v6[64]; // [sp+Ch] [bp-C8h] BYREF
  char v7[64]; // [sp+4Ch] [bp-88h] BYREF
  char s[64]; // [sp+8Ch] [bp-48h] BYREF
  json_t *v9; // [sp+CCh] [bp-8h]

  memset(s, 0, sizeof(s));
  memset(v7, 0, sizeof(v7));
  result = memset(v6, 0, sizeof(v6));
  if ( a1 )
  {
    v9 = (json_t *)json_object();
    snprintf(s, 0x40u, "%s", g_miner_version);
    v2 = (json_t *)json_string(s);
    json_object_set_new(v9, "miner_version", v2);
    snprintf(v7, 0x40u, "%s", g_miner_compiletime);
    v3 = (json_t *)json_string(v7);
    json_object_set_new(v9, "CompileTime", v3);
    snprintf(v6, 0x40u, "%s", g_miner_type);
    v4 = (json_t *)json_string(v6);
    json_object_set_new(v9, "type", v4);
    return (void *)json_object_set_new(a1, "INFO", v9);
  }
  return result;
}
