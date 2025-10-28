int __fastcall sub_438C0(int a1)
{
  int v1; // r5
  void (*v4)(void); // r3
  sigset_t v5; // [sp+0h] [bp-80h] BYREF

  v1 = dword_46AF74 != -1;
  if ( v1 == a1 )
    return v1;
  sub_40DE0(&v5);
  if ( a1 )
  {
    if ( sub_969C0(&dword_46AF74) == -1 )
    {
      sub_94728("linux-nat.c", 4542, "creating event pipe failed.");
      if ( dword_46AF74 != -1 )
      {
        sub_152E54(dword_46AF74);
        sub_438C0(0);
      }
      v4 = *(void (**)(void))(dword_472024 + 28);
      if ( v4 )
        v4();
      __asm { BX              R3 }
    }
    sub_333C6C(dword_46AF74, 4, 2048);
    sub_333C6C(dword_46AF78, 4, 2048);
    sigprocmask(2, &v5, 0);
    return v1;
  }
  close(dword_46AF74);
  close(dword_46AF78);
  dword_46AF74 = -1;
  dword_46AF78 = -1;
  sigprocmask(2, &v5, 0);
  return v1;
}
