int __fastcall sub_247064(int a1, int a2)
{
  _BYTE *v3; // r4
  int v4; // r3
  void *v5; // r0
  int v6; // r5
  int (__fastcall *v7)(int); // r0
  int *v8; // r0
  int v9; // r2
  int *v10; // r11
  int v11; // r4
  int v12; // r6
  int v13; // r2
  ssize_t v14; // r0
  int v15; // r0
  size_t v16; // r0
  int v17; // r0
  void *v19; // [sp+0h] [bp-41Ch]
  int v21; // [sp+8h] [bp-414h] BYREF
  __int64 v22; // [sp+Ch] [bp-410h]
  char v23; // [sp+1Bh] [bp-401h] BYREF
  int v24; // [sp+1Ch] [bp-400h] BYREF
  int v25; // [sp+20h] [bp-3FCh] BYREF
  char *v26; // [sp+24h] [bp-3F8h] BYREF
  char buf; // [sp+28h] [bp-3F4h] BYREF
  char s1[7]; // [sp+29h] [bp-3F3h] BYREF
  char v29[2]; // [sp+30h] [bp-3ECh] BYREF
  char v30; // [sp+32h] [bp-3EAh] BYREF
  char v31; // [sp+33h] [bp-3E9h] BYREF
  _BYTE v32[2]; // [sp+34h] [bp-3E8h] BYREF
  char v33; // [sp+36h] [bp-3E6h] BYREF
  _BYTE v34[985]; // [sp+37h] [bp-3E5h] BYREF

  v24 = 0;
  v25 = 0;
  sub_231DD4(a2);
  if ( !a1 )
    sub_94708("No trace file specified.");
  v3 = (_BYTE *)sub_29B938(a1);
  if ( *v3 != 47 )
  {
    v4 = sub_31E2A4(dword_48A4F8, &word_39899C, v3);
    v5 = v3;
    v3 = (_BYTE *)v4;
    free(v5);
  }
  v6 = sub_967DC((int)v3, 0x20000);
  if ( v6 < 0 )
    sub_258B2C(v3);
  sub_231C90(&dword_48A5C4);
  dword_46DCEC = v6;
  dword_48A598 = (int)v3;
  sub_92078((int)&dword_48A5B8);
  sub_246520(&buf, 8);
  if ( buf != 127 || strncmp(s1, "TRACE0\n", 7u) )
    sub_94708("File is not a valid trace file.");
  v7 = sub_231BA0((int)&dword_48A5C4);
  dword_48A5AC = 0;
  v8 = (int *)sub_24976C(v7);
  v9 = dword_48A598;
  v8[1] = 0;
  v10 = v8;
  v8[3] = 0;
  v8[9] = 0;
  v8[10] = 0;
  v8[11] = 0;
  *v8 = v9;
  v8[6] = -1;
  v19 = sub_92E50();
  v11 = 0;
  v12 = 8;
  while ( 1 )
  {
    v14 = sub_246520(&v23, 1);
    ++v12;
    if ( v23 == 10 )
      break;
    v13 = v11 + 1;
    v29[v11] = v23;
    if ( v11 + 1 >= 1000 )
      sub_94708("Excessively long lines in trace file");
LABEL_9:
    v11 = v13;
  }
  if ( v11 )
  {
    v29[v11] = 0;
    v26 = v29;
    if ( !strncmp(v29, "R ", 2u) )
    {
      v26 = &v30;
      dword_48A5AC = strtol(&v30, &v26, 16);
    }
    else if ( !strncmp(v29, "status ", 7u) )
    {
      v26 = v34;
      v15 = sub_24976C(0);
      sub_24C870(v34, v15);
    }
    else if ( !strncmp(v29, "tp ", 3u) )
    {
      v26 = &v31;
      ((void (__fastcall *)(char *, int *))loc_24CEF8)(&v31, &v24);
    }
    else if ( !strncmp(v29, "tsv ", 4u) )
    {
      v26 = v32;
      sub_24D338(v32, &v25);
    }
    else if ( !strncmp(v29, "tdesc ", 6u) )
    {
      v26 = &v33;
      v16 = strlen(&v33);
      sub_9206C(&dword_48A5B8, &v33, v16);
      sub_9206C(&dword_48A5B8, &word_356660, 1u);
    }
    else
    {
      sub_946D8("Ignoring trace file definition \"%s\"", v29);
    }
    v13 = 0;
    goto LABEL_9;
  }
  ((void (__fastcall *)(ssize_t))loc_235A24)(v14);
  *(_QWORD *)&dword_48A5B0 = v12;
  if ( !dword_48A5AC )
    sub_94708("No register block size recorded in trace file");
  sub_92E68((int)v19);
  v17 = sub_1836B0();
  sub_1839C0(v17, 1);
  sub_98F78(&v21, 1);
  dword_4878EC = v21;
  qword_4878F0 = v22;
  ((void (*)(void))loc_23FAB4)();
  if ( v10[6] <= 0 )
    sub_946D8("No traceframes present in this file.");
  sub_24C4C4(&v25);
  ((void (__fastcall *)(int *))loc_24C1E4)(&v24);
  return sub_17FFFC((int)&dword_48A5C4, a2);
}
