struct User
{
	char *name;
	char *email;
	int age;
}

int main()
{
	struct User user;
	user.name = "Foo Bar";
	user.email = " foo@hbtn.io";
	user.age = 98;
	return (0);
}

