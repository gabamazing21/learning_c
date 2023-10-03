struct User
{
	char *email;
	char *name;
	int age;
};
int main(void)
{
	struct User user;
	struct User *ptr;
	
	ptr = &user;
	(*ptr).name = "Foo Bar";
	ptr->email = "foo@htn.com";
	return (0);
}
