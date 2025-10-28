int __fastcall eeprom_dump_fixture(unsigned __int8 *a1)
{
  int v1; // r3
  const char *v2; // r11
  int v4; // r5
  char *v5; // r12
  int v6; // r3
  int v7; // r3
  int v8; // r3
  int v9; // r3
  int v10; // r3
  const char *v11; // r3
  int v12; // r3
  const char *v13; // r3
  const char *v14; // r3
  const char *v15; // r3
  const char *v16; // r3
  const char *v17; // r3
  const char *v18; // r3
  const char *v19; // r3
  int v20; // r3
  const char *v21; // r2
  const char *v22; // r3
  const char *v23; // r3
  int v24; // r3
  const char *v25; // r2
  int v26; // r3
  int v27; // r3
  int v28; // r3
  int v29; // r3
  const char *v30; // r2
  char *format; // [sp+18h] [bp-180Ch]
  char s[2048]; // [sp+20h] [bp-1804h] BYREF
  char v34[4100]; // [sp+820h] [bp-1004h] BYREF

  LOWORD(v1) = 24192;
  LOWORD(v2) = 24204;
  HIWORD(v2) = (unsigned int)"_type OOM" >> 16;
  HIWORD(v1) = (unsigned int)"Decode miner_type OOM" >> 16;
  snprintf(s, 0x800u, v2, v1, *a1 & 0xF);
  V_LOCK();
  logfmt_raw(v34, 0x1000u, 0, s);
  LOWORD(v4) = 23232;
  V_UNLOCK();
  HIWORD(v4) = (unsigned int)" not ready, chain = %d." >> 16;
  LOWORD(v5) = 24308;
  HIWORD(v5) = (unsigned int)"ndard" >> 16;
  format = v5;
  zlog(g_zc, v4, 173, "eeprom_dump_fixture", 19, 469, 100, v34);
  LOWORD(v6) = 24220;
  HIWORD(v6) = (unsigned int)"version" >> 16;
  snprintf(s, 0x800u, v2, v6, *a1 >> 4);
  V_LOCK();
  logfmt_raw(v34, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(g_zc, v4, 173, "eeprom_dump_fixture", 19, 470, 100, v34);
  LOWORD(v7) = 24236;
  HIWORD(v7) = (unsigned int)"0x%04x" >> 16;
  snprintf(s, 0x800u, v2, v7, a1[1]);
  V_LOCK();
  logfmt_raw(v34, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(g_zc, v4, 173, "eeprom_dump_fixture", 19, 471, 100, v34);
  LOWORD(v8) = 24256;
  HIWORD(v8) = (unsigned int)"de" >> 16;
  snprintf(s, 0x800u, v2, v8, a1[45]);
  V_LOCK();
  logfmt_raw(v34, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(g_zc, v4, 173, "eeprom_dump_fixture", 19, 472, 100, v34);
  LOWORD(v9) = 24276;
  HIWORD(v9) = (unsigned int)"" >> 16;
  snprintf(s, 0x800u, v2, v9, a1[46]);
  V_LOCK();
  logfmt_raw(v34, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(g_zc, v4, 173, "eeprom_dump_fixture", 19, 473, 100, v34);
  LOWORD(v10) = 24292;
  HIWORD(v10) = (unsigned int)"dard" >> 16;
  snprintf(s, 0x800u, format, v10, *(_DWORD *)(a1 + 31));
  V_LOCK();
  logfmt_raw(v34, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(g_zc, v4, 173, "eeprom_dump_fixture", 19, 474, 100, v34);
  LOWORD(v11) = 24320;
  HIWORD(v11) = (unsigned int)"_technology" >> 16;
  snprintf(s, 0x800u, "%-30s : 0x%02x", v11, a1[2]);
  V_LOCK();
  logfmt_raw(v34, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(g_zc, v4, 173, "eeprom_dump_fixture", 19, 475, 100, v34);
  LOWORD(v12) = 24356;
  HIWORD(v12) = (unsigned int)"version" >> 16;
  snprintf(s, 0x800u, format, v12, *(_DWORD *)(a1 + 3));
  V_LOCK();
  logfmt_raw(v34, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(g_zc, v4, 173, "eeprom_dump_fixture", 19, 477, 100, v34);
  LOWORD(v13) = 28220;
  HIWORD(v13) = (unsigned int)"rol_info_init" >> 16;
  snprintf(s, 0x800u, "%-30s : 0x%02x-%02x", v13, a1[27], a1[28]);
  V_LOCK();
  logfmt_raw(v34, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(g_zc, v4, 173, "eeprom_dump_fixture", 19, 478, 100, v34);
  LOWORD(v14) = 24380;
  HIWORD(v14) = (unsigned int)"SN" >> 16;
  snprintf(s, 0x800u, "%-30s : 0x%02x-%02x", v14, a1[29], a1[30]);
  V_LOCK();
  logfmt_raw(v34, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(g_zc, v4, 173, "eeprom_dump_fixture", 19, 479, 100, v34);
  LOWORD(v15) = 24384;
  HIWORD(v15) = (unsigned int)"%-30s : 0x%02x-%02x" >> 16;
  snprintf(s, 0x800u, "%-30s : %u", v15, *(unsigned __int16 *)(a1 + 35));
  V_LOCK();
  logfmt_raw(v34, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(g_zc, v4, 173, "eeprom_dump_fixture", 19, 480, 100, v34);
  LOWORD(v16) = 24416;
  HIWORD(v16) = (unsigned int)"rd_voltage" >> 16;
  snprintf(s, 0x800u, "%-30s : %u", v16, *(unsigned __int16 *)(a1 + 37));
  V_LOCK();
  logfmt_raw(v34, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(g_zc, v4, 173, "eeprom_dump_fixture", 19, 481, 100, v34);
  snprintf(s, 0x800u, "%-30s : %.2f", "nonce_response_rate", *(float *)(a1 + 39));
  V_LOCK();
  logfmt_raw(v34, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(g_zc, v4, 173, "eeprom_dump_fixture", 19, 482, 100, v34);
  LOWORD(v17) = 24468;
  HIWORD(v17) = (unsigned int)"se_rate" >> 16;
  snprintf(s, 0x800u, "%-30s : %u", v17, a1[43]);
  V_LOCK();
  logfmt_raw(v34, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(g_zc, v4, 173, "eeprom_dump_fixture", 19, 483, 100, v34);
  LOWORD(v18) = 24488;
  HIWORD(v18) = (unsigned int)"" >> 16;
  snprintf(s, 0x800u, "%-30s : %u", v18, a1[44]);
  V_LOCK();
  logfmt_raw(v34, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(g_zc, v4, 173, "eeprom_dump_fixture", 19, 484, 100, v34);
  LOWORD(v19) = 24508;
  HIWORD(v19) = (unsigned int)"e" >> 16;
  snprintf(s, 0x800u, "%-30s : 0x%02x-%02x", v19, a1[20] >> 7, a1[20] & 0x7F);
  V_LOCK();
  logfmt_raw(v34, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(g_zc, v4, 173, "eeprom_dump_fixture", 19, 485, 100, v34);
  LOWORD(v20) = 24520;
  LOWORD(v21) = 24540;
  HIWORD(v20) = (unsigned int)"emperature" >> 16;
  HIWORD(v21) = (unsigned int)"sor" >> 16;
  snprintf(
    s,
    0x800u,
    v21,
    v20,
    **(unsigned __int8 **)(a1 + 21),
    *(unsigned __int8 *)(*(_DWORD *)(a1 + 21) + 1),
    *(unsigned __int8 *)(*(_DWORD *)(a1 + 21) + 2),
    *(unsigned __int8 *)(*(_DWORD *)(a1 + 21) + 3));
  V_LOCK();
  logfmt_raw(v34, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(g_zc, v4, 173, "eeprom_dump_fixture", 19, 486, 100, v34);
  LOWORD(v22) = 24572;
  HIWORD(v22) = (unsigned int)"0x%02x-%02x-%02x-%02x" >> 16;
  snprintf(s, 0x800u, "%-30s : 0x%02x-%02x", v22, a1[25] >> 7, a1[25] & 0x7F);
  V_LOCK();
  logfmt_raw(v34, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(g_zc, v4, 173, "eeprom_dump_fixture", 19, 487, 100, v34);
  LOWORD(v23) = 24584;
  HIWORD(v23) = (unsigned int)"%02x-%02x" >> 16;
  snprintf(s, 0x800u, "%-30s : 0x%02x", v23, a1[26]);
  V_LOCK();
  logfmt_raw(v34, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(g_zc, v4, 173, "eeprom_dump_fixture", 19, 488, 100, v34);
  LOWORD(v24) = 24600;
  LOWORD(v25) = 24612;
  HIWORD(v24) = (unsigned int)"sensor" >> 16;
  HIWORD(v25) = (unsigned int)"sensor addr" >> 16;
  snprintf(s, 0x800u, v25, v24, a1[15]);
  V_LOCK();
  logfmt_raw(v34, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(g_zc, v4, 173, "eeprom_dump_fixture", 19, 489, 100, v34);
  LOWORD(v26) = 24628;
  HIWORD(v26) = (unsigned int)"_bin" >> 16;
  snprintf(s, 0x800u, format, v26, *((_DWORD *)a1 + 4));
  V_LOCK();
  logfmt_raw(v34, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(g_zc, v4, 173, "eeprom_dump_fixture", 19, 490, 100, v34);
  LOWORD(v27) = 24632;
  HIWORD(v27) = (unsigned int)"" >> 16;
  snprintf(s, 0x800u, format, v27, *(_DWORD *)(a1 + 7));
  V_LOCK();
  logfmt_raw(v34, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(g_zc, v4, 173, "eeprom_dump_fixture", 19, 491, 100, v34);
  LOWORD(v28) = 24644;
  HIWORD(v28) = (unsigned int)"bin%d" >> 16;
  snprintf(s, 0x800u, format, v28, *(_DWORD *)(a1 + 11));
  V_LOCK();
  logfmt_raw(v34, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(g_zc, v4, 173, "eeprom_dump_fixture", 19, 492, 100, v34);
  LOWORD(v29) = 24660;
  LOWORD(v30) = 24676;
  HIWORD(v29) = (unsigned int)"_die" >> 16;
  HIWORD(v30) = (unsigned int)"king" >> 16;
  snprintf(s, 0x800u, v30, v29, a1[51]);
  V_LOCK();
  logfmt_raw(v34, 0x1000u, 0, s);
  V_UNLOCK();
  return zlog(g_zc, v4, 173, "eeprom_dump_fixture", 19, 493, 100, v34);
}
