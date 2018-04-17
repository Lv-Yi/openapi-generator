#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

/**
* Swagger Petstore
* This is a sample server Petstore server.  You can find out more about Swagger at http://swagger.io or on irc.freenode.net, #swagger.  For this sample, you can use the api key \"special-key\" to test the authorization filters
*
* OpenAPI spec version: 1.0.0
* Contact: apiteam@wordnik.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/




NS_ASSUME_NONNULL_BEGIN

@interface SWGUserManagedObject : NSManagedObject


@property (nullable, nonatomic, retain) NSNumber* _id;

@property (nullable, nonatomic, retain) NSString* username;

@property (nullable, nonatomic, retain) NSString* firstName;

@property (nullable, nonatomic, retain) NSString* lastName;

@property (nullable, nonatomic, retain) NSString* email;

@property (nullable, nonatomic, retain) NSString* password;

@property (nullable, nonatomic, retain) NSString* phone;
/* User Status [optional]
 */
@property (nullable, nonatomic, retain) NSNumber* userStatus;
@end

@interface SWGUserManagedObject (GeneratedAccessors)

@end


NS_ASSUME_NONNULL_END
