int make_fake_version()
{
  int v0; // r3
  int v1; // r2
  const char *v2; // r1
  int v3; // r4
  int *v4; // r3
  int result; // r0
  int v6; // r1
  int v7; // r2
  int v8; // r3
  char v9[64]; // [sp+0h] [bp-40h] BYREF

  LOWORD(v0) = -2540;
  LOWORD(v1) = -3216;
  LOWORD(v2) = -1424;
  LOWORD(v3) = 20480;
  HIWORD(v0) = (unsigned int)"[OPTIONS]\nOptions:\n  -a, --algo=ALGO       specify the algorithm to use\n                          beam         Equihash(150,5)\n                          grin29       Cuckaroo29\n                          vbk          VBlake2\n  -o, --url=URL         URL of mining server\n  -u, --user=USERNAME   username for mining server\n  -p, --pass=PASSWORD   password for mining server\n  -P, --protocol        verbose dump of protocol-level activities\n      --api-remote      Allow remote control\n  -c, --config=FILE     load a JSON-format configuration file\n  -v, --version         display version information and exit\n  -F, --bitmain-fan-ctrl  set if fixed fan's pwm\n      --bitmain-fan-pwm=N set pwm value when fan pwm fixed\n      --bitmain-freq=N  set working freq\n      --bitmain-voltage=N  set working power voltage\n  -z, --zlog=FILE       load a zlog configuration file\n  -h, --help            display this help text and exit\n" >> 16;
  HIWORD(v1) = (unsigned int)"connect to pool" >> 16;
  HIWORD(v2) = (unsigned int)"%s: Bad eeprom param, input chain is %d\n" >> 16;
  HIWORD(v3) = (unsigned int)&unk_163ED8 >> 16;
  sprintf(v9, v2, v1, v0);
  strcpy((char *)(v3 + 224), v9);
  LOWORD(v4) = -3204;
  v3 += 480;
  HIWORD(v4) = (unsigned int)"ool" >> 16;
  result = *v4;
  v6 = v4[1];
  v7 = v4[2];
  v8 = v4[3];
  *(_DWORD *)v3 = result;
  *(_DWORD *)(v3 + 4) = v6;
  *(_DWORD *)(v3 + 8) = v7;
  *(_DWORD *)(v3 + 12) = v8;
  return result;
}
