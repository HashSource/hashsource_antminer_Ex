FILE *__fastcall x11_log_work(int a1, int a2, int a3)
{
  FILE *result; // r0
  size_t v4; // r0
  int v6; // [sp+8h] [bp-11Ch] BYREF
  int v7; // [sp+Ch] [bp-118h]
  char s[256]; // [sp+14h] [bp-110h] BYREF
  int v9; // [sp+114h] [bp-10h]
  int *v10; // [sp+118h] [bp-Ch]
  int v11; // [sp+11Ch] [bp-8h]

  v7 = a1;
  v6 = a2;
  memset(s, 0, sizeof(s));
  v11 = v7;
  v10 = &v6;
  v9 = a3;
  result = fopen("/tmp/x11_dump_file.log", "a");
  g_logwork_file = (int)result;
  if ( result )
  {
    v4 = strlen(s);
    fwrite(s, v4, 1u, (FILE *)g_logwork_file);
    fwrite("\n", 1u, 1u, (FILE *)g_logwork_file);
    return (FILE *)fflush((FILE *)g_logwork_file);
  }
  return result;
}
