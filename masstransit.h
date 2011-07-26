//void* mt_deserialize(char* input);
//char* mt_serialize(void* obj); //needs to be an 'object'?

//void mt_publish(const int* msg);
//void mt_subscribe(const char* msg_name, void * callback(msg));


typedef struct tagSubscription {
	char *messageName;
	int count; //should be a pointer?
} Subscription;

typedef struct tagEnvelope {
	const char* MessageName;
	const char* Message;
} Envelope;


void mt_pub(Subscription s);