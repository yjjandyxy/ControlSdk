

Pod::Spec.new do |spec|
  spec.name         = "SDK"
  spec.version      = "1.0.0"
  spec.summary      = "这是N60远控SDK------"
  spec.description  = "提供钛码工程师使用"
  spec.homepage     = "https://github.com/yjjandyxy/ControlSdk"
  spec.license      = "MIT)"
  spec.author             = { "ShyPig" => "709540282@qq.com" }
   spec.platform     = :ios, "10.0"
  spec.source       = { :git => "https://github.com/yjjandyxy/ControlSdk.git", :tag => "#{spec.version}" }
  spec.source_files  = "ControlSdk","*.{h,m}"
#  spec.exclude_files = "Classes/Exclude"
  spec.requires_arc = true
  spec.vendored_frameworks = 'SDK.framework'

end
