int sub_C0468()
{
  sub_5329C(
    "agent",
    11,
    (int)sub_C034C,
    (int)"Translate an expression into remote agent bytecode for tracing.\n"
         "Usage: maint agent [-at location,] EXPRESSION\n"
         "If -at is given, generate remote agent bytecode for this location.\n"
         "If not, generate remote agent bytecode for current frame pc address.",
    (int **)&dword_47478C);
  sub_5329C(
    "agent-eval",
    11,
    (int)sub_C0344,
    (int)"Translate an expression into remote agent bytecode for evaluation.\n"
         "Usage: maint agent-eval [-at location,] EXPRESSION\n"
         "If -at is given, generate remote agent bytecode for this location.\n"
         "If not, generate remote agent bytecode for current frame pc address.",
    (int **)&dword_47478C);
  return sub_5329C(
           "agent-printf",
           11,
           (int)sub_C04EC,
           (int)"Translate an expression into remote agent bytecode for evaluation and display the bytecodes.",
           (int **)&dword_47478C);
}
